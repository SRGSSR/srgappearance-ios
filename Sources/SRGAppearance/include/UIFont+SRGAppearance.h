//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

// Custom SRG SSR font text styles. The font size for the usual content size category (large) is provided as information.
typedef NSString * SRGAppearanceFontTextStyle NS_TYPED_ENUM;

OBJC_EXPORT SRGAppearanceFontTextStyle const SRGAppearanceFontTextStyleCaption;             // 11 pts (iOS), 20 pts (tvOS)
OBJC_EXPORT SRGAppearanceFontTextStyle const SRGAppearanceFontTextStyleSubtitle;            // 13 pts (iOS), 29 pts (tvOS)
OBJC_EXPORT SRGAppearanceFontTextStyle const SRGAppearanceFontTextStyleBody;                // 15 pts (iOS), 26 pts (tvOS)
OBJC_EXPORT SRGAppearanceFontTextStyle const SRGAppearanceFontTextStyleHeadline;            // 17 pts (iOS), 31 pts (tvOS)
OBJC_EXPORT SRGAppearanceFontTextStyle const SRGAppearanceFontTextStyleTitle;               // 20 pts (iOS), 48 pts (tvOS)

/**
 *  Register a font from the specified file. Returns `YES` iff successful.
 *
 *  @discussion The method returns `NO` if the font has already been registered.
 */
OBJC_EXPORT BOOL SRGAppearanceRegisterFont(NSString *filePath);

/**
 *  Compare font size categories (@see `UIContentSizeCategory.h`).
 *
 *  @dicussion In debug builds, this method throws if the content size category is not an official one.
 */
OBJC_EXPORT NSComparisonResult SRGAppearanceCompareContentSizeCategories(NSString *contentSizeCategory1, NSString *contentSizeCategory2);

@interface UIFont (SRGAppearance)

/**
 *  SRG SSR official fonts with size set in the system settings.
 */
+ (UIFont *)srg_regularFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;
+ (UIFont *)srg_boldFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;
+ (UIFont *)srg_heavyFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;
+ (UIFont *)srg_lightFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;
+ (UIFont *)srg_mediumFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;
+ (UIFont *)srg_italicFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;
+ (UIFont *)srg_boldItalicFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;

+ (UIFont *)srg_regularSerifFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;
+ (UIFont *)srg_lightSerifFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;
+ (UIFont *)srg_mediumSerifFontWithTextStyle:(SRGAppearanceFontTextStyle)textStyle;

/**
 *  SRG SSR official fonts with fixed sizes.
 */
+ (UIFont *)srg_regularFontWithSize:(CGFloat)size;
+ (UIFont *)srg_boldFontWithSize:(CGFloat)size;
+ (UIFont *)srg_heavyFontWithSize:(CGFloat)size;
+ (UIFont *)srg_lightFontWithSize:(CGFloat)size;
+ (UIFont *)srg_mediumFontWithSize:(CGFloat)size;
+ (UIFont *)srg_italicFontWithSize:(CGFloat)size;
+ (UIFont *)srg_boldItalicFontWithSize:(CGFloat)size;

+ (UIFont *)srg_regularSerifFontWithSize:(CGFloat)size;
+ (UIFont *)srg_lightSerifFontWithSize:(CGFloat)size;
+ (UIFont *)srg_mediumSerifFontWithSize:(CGFloat)size;

/**
 *  Return a font with the given SRG SSR font text style.
 *
 *  @discussion If the specified font does not exist, the method returns the Helvetica font.
 */
+ (UIFont *)srg_fontWithName:(NSString *)name textStyle:(SRGAppearanceFontTextStyle)textStyle;

@end

NS_ASSUME_NONNULL_END
