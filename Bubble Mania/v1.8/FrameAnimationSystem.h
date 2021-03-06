/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@class NSMutableDictionary;

@interface FrameAnimationSystem : NSObject {

	unordered_map<unsigned long, FrameAnimationComp *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, FrameAnimationComp *> > >* compositions;
	NSMutableDictionary* queuedFilesForProcess;
	vector<FrameAnimatedBillboardPrimitive *, std::__1::allocator<FrameAnimatedBillboardPrimitive *> >* frameAnimationBillboards;
	float animationDelegateUpdateFrequency;
	double lastDelegateUpdateTime;

}
+(id)instance;
-(void)downloadComplete:(id)arg1 ;
-(void)addComposition:(id)arg1 ;
-(id)compositionFromFile:(id)arg1 package:(id)arg2 ;
-(id)compositionFromFile:(id)arg1 ;
-(void)registerFrameAnimationBillboard:(id)arg1 ;
-(void)unregisterFrameAnimationBillboard:(id)arg1 ;
-(void)preloadCompositionFromFile:(id)arg1 package:(id)arg2 ;
-(id)compositionFromDic:(id)arg1 ;
-(_hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, FrameAnimationComp *>, void *> *> >*)cachedAnimationCompForFile:(id)arg1 ;
-(void)processDownload:(id)arg1 ;
-(void)preloadCompositionFromFile:(id)arg1 ;
-(void)updateFrameAnimationBillboardDelegates;
-(void)dealloc;
-(id)init;
@end

