/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIDynamicItem.h>

@protocol UIDynamicItem;
@class NSString;

@interface PTHDynamicItemFilter : NSObject <UIDynamicItem> {

	BOOL _filterVerticalMovement;
	BOOL _filterHorizontalMovement;
	BOOL _freeze;
	id<UIDynamicItem> _item;
	/*^block*/id _filterCenterBlock;

}

@property (nonatomic,readonly) id<UIDynamicItem> item;                   //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) id filterCenterBlock;                         //@synthesize filterCenterBlock=_filterCenterBlock - In the implementation block
@property (assign,nonatomic) BOOL filterVerticalMovement;                //@synthesize filterVerticalMovement=_filterVerticalMovement - In the implementation block
@property (assign,nonatomic) BOOL filterHorizontalMovement;              //@synthesize filterHorizontalMovement=_filterHorizontalMovement - In the implementation block
@property (assign,nonatomic) BOOL freeze;                                //@synthesize freeze=_freeze - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
-(id)filterCenterBlock;
-(void)setFilterCenterBlock:(id)arg1 ;
-(BOOL)filterVerticalMovement;
-(void)setFilterVerticalMovement:(BOOL)arg1 ;
-(BOOL)filterHorizontalMovement;
-(void)setFilterHorizontalMovement:(BOOL)arg1 ;
-(void)setFreeze:(BOOL)arg1 ;
-(BOOL)freeze;
-(CGRect)bounds;
-(id<UIDynamicItem>)item;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGPoint)center;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithItem:(id)arg1 ;
@end
