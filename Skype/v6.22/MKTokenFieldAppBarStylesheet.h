/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/MKTokenFieldBarStylesheet.h>

@class UIColor;

@interface MKTokenFieldAppBarStylesheet : MKTokenFieldBarStylesheet

@property (nonatomic,readonly) UIColor * textColorTokenButtonActive; 
@property (nonatomic,readonly) UIColor * textColorTokenButtonInactive; 
@property (nonatomic,readonly) UIColor * placeholderTextColorActive; 
@property (nonatomic,readonly) double iconsContainerHeight; 
@property (nonatomic,readonly) double iconWidth; 
@property (nonatomic,readonly) double iconHeight; 
@property (nonatomic,readonly) double iconBorderWidth; 
@property (nonatomic,readonly) double marginBetweenButtons; 
@property (nonatomic,readonly) double leftMargin; 
@property (nonatomic,readonly) double rightMargin; 
@property (nonatomic,readonly) double marginTokenAndButtons; 
@property (nonatomic,readonly) UIColor * iconDefaultColor; 
-(double)leftMarginForTraitCollection:(id)arg1 ;
-(double)rightMarginForTraitCollection:(id)arg1 ;
-(double)leftMarginForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)rightMarginForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)iconsContainerHeightForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)iconWidthForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)iconHeightForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)iconBorderWidthForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)marginBetweenButtonsForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)iconsContainerHeight;
-(double)iconsContainerHeightForTraitCollection:(id)arg1 ;
-(double)iconWidthForTraitCollection:(id)arg1 ;
-(double)iconHeight;
-(double)iconHeightForTraitCollection:(id)arg1 ;
-(double)iconBorderWidth;
-(double)iconBorderWidthForTraitCollection:(id)arg1 ;
-(double)marginBetweenButtons;
-(double)marginBetweenButtonsForTraitCollection:(id)arg1 ;
-(id)textColorTokenButtonActiveForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(id)textColorTokenButtonInactiveForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(id)placeholderTextColorActiveForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(double)marginTokenAndButtonsForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(id)iconDefaultColorForTraitCollection:(id)arg1 withSize:(CGSize)arg2 ;
-(UIColor *)textColorTokenButtonActive;
-(id)textColorTokenButtonActiveForTraitCollection:(id)arg1 ;
-(UIColor *)textColorTokenButtonInactive;
-(id)textColorTokenButtonInactiveForTraitCollection:(id)arg1 ;
-(UIColor *)placeholderTextColorActive;
-(id)placeholderTextColorActiveForTraitCollection:(id)arg1 ;
-(double)marginTokenAndButtons;
-(double)marginTokenAndButtonsForTraitCollection:(id)arg1 ;
-(UIColor *)iconDefaultColor;
-(id)iconDefaultColorForTraitCollection:(id)arg1 ;
-(double)rightMargin;
-(double)leftMargin;
-(double)iconWidth;
@end
