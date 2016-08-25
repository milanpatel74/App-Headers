/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:20 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ECThemeHelper : NSObject
+(id)mergeNewStyles:(id)arg1 intoExistingStyles:(id)arg2 ;
+(id)mergeStyle:(id)arg1 intoStyle:(id)arg2 ;
+(id)setsOfMutuallyExclusiveKeysForBackgroundStyles;
+(void)checkStyle:(id)arg1 forSetsOfMutuallyExclusiveKeys:(id)arg2 ;
+(id)mergeNewStyles:(id)arg1 intoExistingStyles:(id)arg2 setsOfMutuallyExclusiveKeys:(id)arg3 ;
+(id)deNullifiedStylesFromStyles:(id)arg1 ;
+(id)colorDescription:(id)arg1 ;
+(id)textStyleForTextLabelContainedInTableViewCellClassname:(id)arg1 ;
+(id)textStyleForDetailTextLabelContainedInTableViewCellClassname:(id)arg1 ;
+(void)dumpAndCheck;
+(id)textStyleDictionaryWithOpacityChange:(id)arg1 opacity:(double)arg2 ;
+(id)textStyleForTextLabelContainedInTableViewCellClassname:(id)arg1 usedStextStyleName:(id*)arg2 ;
+(id)cellClassnamesOfUnstyledTextLabels;
+(id)textStyleForDetailTextLabelContainedInTableViewCellClassname:(id)arg1 usedStextStyleName:(id*)arg2 ;
+(id)cellClassnamesOfUnstyledDetailTextLabels;
+(void)dumpTheme:(id)arg1 ;
+(void)checkTextStyles:(id)arg1 ;
+(id)colorDescription:(id)arg1 showPaletteColorName:(BOOL)arg2 showPaletteColorDetails:(BOOL)arg3 ;
+(id)hex:(double)arg1 ;
+(id)floatColor:(double)arg1 ;
+(id)base255:(double)arg1 ;
+(id)offsetDescription:(id)arg1 ;
+(id)objectDescription:(id)arg1 withInset:(id)arg2 ;
+(id)fontDescription:(id)arg1 ;
+(id)dictionaryDescription:(id)arg1 withOldInset:(id)arg2 ;
+(id)shadowDescription:(id)arg1 ;
+(id)gradientDescription:(id)arg1 withInset:(id)arg2 ;
+(id)dumpOfPaletteColors;
+(id)themeDescriptionForDictionary:(id)arg1 ;
+(id)descriptionOfThemeObject:(id)arg1 ;
+(id)mergeStyle:(id)arg1 intoStyle:(id)arg2 setsOfMutuallyExclusiveKeys:(id)arg3 ;
+(void)testColor:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
@end
