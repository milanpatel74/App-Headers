/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:47 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusSubview.h>

@protocol PTHTweetbotStatusMediaViewDelegate;
@class NSMutableArray, UILongPressGestureRecognizer, PTHTweetbotEntity, PTHTweetbotMedium;

@interface PTHTweetbotStatusMediaView : PTHTweetbotStatusSubview {

	NSMutableArray* _mediumViews;
	unsigned long long _mediumCount;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _loadingDisabled;
	long long _imageType;
	id<PTHTweetbotStatusMediaViewDelegate> _delegate;
	PTHTweetbotEntity* _mediaEntity;
	PTHTweetbotMedium* _highlightedMedium;
	PTHTweetbotMedium* _selectedMedium;

}

@property (assign,nonatomic) long long imageType;                                                 //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic,__weak) id<PTHTweetbotStatusMediaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntity * mediaEntity;                                     //@synthesize mediaEntity=_mediaEntity - In the implementation block
@property (nonatomic,retain) PTHTweetbotMedium * highlightedMedium;                               //@synthesize highlightedMedium=_highlightedMedium - In the implementation block
@property (nonatomic,retain) PTHTweetbotMedium * selectedMedium;                                  //@synthesize selectedMedium=_selectedMedium - In the implementation block
@property (assign,nonatomic) BOOL loadingDisabled;                                                //@synthesize loadingDisabled=_loadingDisabled - In the implementation block
+(CGRect)largeMediumFrameForSize:(CGSize)arg1 mediumIndex:(unsigned long long)arg2 mediumCount:(unsigned long long)arg3 ;
+(CGRect)smallMediumFrameForMediumIndex:(unsigned long long)arg1 mediumCount:(unsigned long long)arg2 ;
-(void)colorAppearanceDidChange;
-(id)mediumViewAtPoint:(CGPoint)arg1 ;
-(void)setHighlightedMedium:(PTHTweetbotMedium *)arg1 ;
-(PTHTweetbotMedium *)highlightedMedium;
-(void)setSelectedMedium:(PTHTweetbotMedium *)arg1 ;
-(void)setMediaEntity:(PTHTweetbotEntity *)arg1 ;
-(void)setLoadingDisabled:(BOOL)arg1 ;
-(void)_updateMediaEntity;
-(CGRect)mediumRectForMedium:(id)arg1 ;
-(PTHTweetbotMedium *)selectedMedium;
-(BOOL)loadingDisabled;
-(void)_longPress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PTHTweetbotStatusMediaViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PTHTweetbotStatusMediaViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setStatus:(id)arg1 ;
-(void)setImageType:(long long)arg1 ;
-(long long)imageType;
-(PTHTweetbotEntity *)mediaEntity;
@end
