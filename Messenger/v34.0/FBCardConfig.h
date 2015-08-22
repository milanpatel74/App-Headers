/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBFIGConfig.h>

@class UIImage, NSString;

@interface FBCardConfig : FBValueObject <FBFIGConfig> {

	long long _insetStyle;
	long long _option;
	long long _cardStyle;
	UIImage* _cardFillBackgroundImage;
	UIImage* _cardFillBackgroundTransparentImage;
	UIImage* _cardFillMaskImage;
	UIImage* _cardFillMaskDisabledImage;
	UIImage* _cardHeaderImage;
	UIImage* _cardMiddleImage;
	UIImage* _cardFooterImage;
	UIImage* _cardFooterTransparentImage;
	/*^block*/id _defaultContentInsetsLoader;
	/*^block*/id _fullBleedContentInsetsLoader;
	/*^block*/id _fillCapInsetsLoader;

}

@property (nonatomic,readonly) long long insetStyle;                                           //@synthesize insetStyle=_insetStyle - In the implementation block
@property (nonatomic,readonly) long long option;                                               //@synthesize option=_option - In the implementation block
@property (nonatomic,readonly) long long cardStyle;                                            //@synthesize cardStyle=_cardStyle - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cardFillBackgroundImage;                         //@synthesize cardFillBackgroundImage=_cardFillBackgroundImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cardFillBackgroundTransparentImage;              //@synthesize cardFillBackgroundTransparentImage=_cardFillBackgroundTransparentImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cardFillMaskImage;                               //@synthesize cardFillMaskImage=_cardFillMaskImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cardFillMaskDisabledImage;                       //@synthesize cardFillMaskDisabledImage=_cardFillMaskDisabledImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cardHeaderImage;                                 //@synthesize cardHeaderImage=_cardHeaderImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cardMiddleImage;                                 //@synthesize cardMiddleImage=_cardMiddleImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cardFooterImage;                                 //@synthesize cardFooterImage=_cardFooterImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cardFooterTransparentImage;                      //@synthesize cardFooterTransparentImage=_cardFooterTransparentImage - In the implementation block
@property (nonatomic,copy,readonly) id defaultContentInsetsLoader;                             //@synthesize defaultContentInsetsLoader=_defaultContentInsetsLoader - In the implementation block
@property (nonatomic,copy,readonly) id fullBleedContentInsetsLoader;                           //@synthesize fullBleedContentInsetsLoader=_fullBleedContentInsetsLoader - In the implementation block
@property (nonatomic,copy,readonly) id fillCapInsetsLoader;                                    //@synthesize fillCapInsetsLoader=_fillCapInsetsLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithInsetStyle:(long long)arg1 option:(long long)arg2 cardStyle:(long long)arg3 cardFillBackgroundImage:(id)arg4 cardFillBackgroundTransparentImage:(id)arg5 cardFillMaskImage:(id)arg6 cardFillMaskDisabledImage:(id)arg7 cardHeaderImage:(id)arg8 cardMiddleImage:(id)arg9 cardFooterImage:(id)arg10 cardFooterTransparentImage:(id)arg11 defaultContentInsetsLoader:(/*^block*/id)arg12 fullBleedContentInsetsLoader:(/*^block*/id)arg13 fillCapInsetsLoader:(/*^block*/id)arg14 ;
-(UIImage *)cardFillBackgroundImage;
-(id)fillCapInsetsLoader;
-(UIImage *)cardFillMaskImage;
-(UIImage *)cardFillMaskDisabledImage;
-(UIImage *)cardHeaderImage;
-(UIImage *)cardMiddleImage;
-(UIImage *)cardFooterImage;
-(UIImage *)cardFillBackgroundTransparentImage;
-(UIImage *)cardFooterTransparentImage;
-(long long)cardStyle;
-(long long)insetStyle;
-(id)fullBleedContentInsetsLoader;
-(id)defaultContentInsetsLoader;
-(id)_initWithInsetStyle:(long long)arg1 option:(long long)arg2 cardStyle:(long long)arg3 cardFillBackgroundImage:(id)arg4 cardFillBackgroundTransparentImage:(id)arg5 cardFillMaskImage:(id)arg6 cardFillMaskDisabledImage:(id)arg7 cardHeaderImage:(id)arg8 cardMiddleImage:(id)arg9 cardFooterImage:(id)arg10 cardFooterTransparentImage:(id)arg11 defaultContentInsetsLoader:(/*^block*/id)arg12 fullBleedContentInsetsLoader:(/*^block*/id)arg13 fillCapInsetsLoader:(/*^block*/id)arg14 ;
-(long long)option;
@end
