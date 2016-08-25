/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSString, UIFont, UIColor;

@interface GADNativeAdAttribution : NSObject {

	NSArray* _loadingImages;
	NSMutableArray* _availableImages;
	/*^block*/id _assetCompletionHandler;
	NSArray* _icons;
	double _iconPresentationDuration;
	double _iconAnimationDuration;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	UIColor* _backgroundColor;

}

@property (nonatomic,readonly) NSArray * icons;                              //@synthesize icons=_icons - In the implementation block
@property (nonatomic,readonly) double iconPresentationDuration;              //@synthesize iconPresentationDuration=_iconPresentationDuration - In the implementation block
@property (nonatomic,readonly) double iconAnimationDuration;                 //@synthesize iconAnimationDuration=_iconAnimationDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                           //@synthesize font=_font - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                     //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)loadAssetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)failedLoadingNativeAdImageWithError:(id)arg1 ;
-(void)finishedLoadingNativeAdImage:(id)arg1 ;
-(double)iconPresentationDuration;
-(double)iconAnimationDuration;
-(UIColor *)backgroundColor;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSArray *)icons;
@end
