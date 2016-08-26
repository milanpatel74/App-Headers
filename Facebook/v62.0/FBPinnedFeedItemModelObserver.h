/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBPinnedFeedItemProvider, FBPinnedFeedItemModelObserverDelegate;
@class FBKVOController;

@interface FBPinnedFeedItemModelObserver : NSObject <NSCopying> {

	id<FBPinnedFeedItemProvider> _pinnedFeedItemProvider;
	FBKVOController* _KVOController;
	id<FBPinnedFeedItemModelObserverDelegate> _delegate;

}

@property (nonatomic,readonly) Class componentProvider; 
@property (nonatomic,readonly) id<NSObject> model; 
@property (assign,nonatomic,__weak) id<FBPinnedFeedItemModelObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newWithPinnedFeedItemProvider:(id)arg1 ;
-(Class)componentProvider;
-(void)setDelegate:(id<FBPinnedFeedItemModelObserverDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<FBPinnedFeedItemModelObserverDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject>)model;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
