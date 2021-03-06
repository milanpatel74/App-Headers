/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBUIConfigurable.h>

@class NSString;

@interface FBCard : NSObject <FBUIConfigurable> {

	UIEdgeInsets _fillCapInsets;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(UIEdgeInsets)contentInsetsForInsetStyle:(long long)arg1 option:(long long)arg2 ;
+(UIEdgeInsets)contentInsetsForInsetStyle:(long long)arg1 option:(long long)arg2 style:(long long)arg3 ;
+(id)cardMaskImage;
+(id)defaultFBUIConfig;
+(id)cardBackgroundTransparentImage;
+(id)cardCellWithInsetStyle:(long long)arg1 option:(long long)arg2 style:(long long)arg3 reuseIdentifier:(id)arg4 ;
+(id)backgroundImageViewForInsetStyle:(long long)arg1 option:(long long)arg2 style:(long long)arg3 ;
+(id)backgroundTransparentImageViewForInsetStyle:(long long)arg1 option:(long long)arg2 ;
+(id)cardImageForOption:(long long)arg1 ;
+(id)cardViewWithInsetStyle:(long long)arg1 option:(long long)arg2 style:(long long)arg3 ;
+(id)cardlessBackgroundImageWithBorderColor:(id)arg1 borderInsets:(UIEdgeInsets)arg2 ;
+(id)cardImageForOption:(long long)arg1 style:(long long)arg2 ;
+(id)cardMaskDisabledImage;
+(id)cardMiddleBackgroundImage;
+(id)backgroundImageViewForInsetStyle:(long long)arg1 option:(long long)arg2 ;
+(id)cardViewWithInsetStyle:(long long)arg1 option:(long long)arg2 ;
+(id)backgroundTransparentImageViewForInsetStyle:(long long)arg1 option:(long long)arg2 style:(long long)arg3 ;
+(id)newWithInsetStyle:(long long)arg1 option:(long long)arg2 style:(long long)arg3 ;
+(id)_cardlessBackgroundImage;
+(id)cardHeaderBackgroundImage;
+(id)cardFooterBackgroundImage;
+(id)newWithInsetStyle:(long long)arg1 option:(long long)arg2 ;
+(id)cardBackgroundImage;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(id)_newCardWrappedInWrappingCellWithIdentifier:(id)arg1 ;
-(id)_newCardWrappedInStackedView;
-(id)_backgroundTransparentImageView;
-(id)_init;
-(UIEdgeInsets)contentInsets;
-(id)config;
-(void)applyConfig:(id)arg1 ;
-(id)_backgroundImageView;
@end

