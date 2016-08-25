/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface GADSwipeToViewControllerConfigurations : NSObject {

	BOOL _adDraggable;
	NSString* _swipeableInAppStoreProductID;
	NSArray* _swipeableRectangles;
	long long _swipeDirection;
	double _swipeAnimationTransitionDuration;
	NSDictionary* _swipeEventCreativeMetadata;

}

@property (nonatomic,copy,readonly) NSString * swipeableInAppStoreProductID;                //@synthesize swipeableInAppStoreProductID=_swipeableInAppStoreProductID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * swipeableRectangles;                          //@synthesize swipeableRectangles=_swipeableRectangles - In the implementation block
@property (assign,nonatomic) long long swipeDirection;                                      //@synthesize swipeDirection=_swipeDirection - In the implementation block
@property (assign,getter=isAdDraggable,nonatomic) BOOL adDraggable;                         //@synthesize adDraggable=_adDraggable - In the implementation block
@property (nonatomic,readonly) double swipeAnimationTransitionDuration;                     //@synthesize swipeAnimationTransitionDuration=_swipeAnimationTransitionDuration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * swipeEventCreativeMetadata;              //@synthesize swipeEventCreativeMetadata=_swipeEventCreativeMetadata - In the implementation block
-(id)initWithSwipeConfigurations:(id)arg1 ;
-(void)setAdDraggable:(BOOL)arg1 ;
-(NSString *)swipeableInAppStoreProductID;
-(NSArray *)swipeableRectangles;
-(BOOL)isAdDraggable;
-(double)swipeAnimationTransitionDuration;
-(NSDictionary *)swipeEventCreativeMetadata;
-(id)init;
-(long long)swipeDirection;
-(void)setSwipeDirection:(long long)arg1 ;
@end
