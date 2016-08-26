/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCommentStreamSource.h>
#import <Facebook/FBCommentStreamParentSource.h>
#import <Facebook/FBCommentStreamChildSource.h>

@class NSMutableOrderedSet, NSString;

@interface FBCommentStreamSourceAggregator : FBCommentStreamSource <FBCommentStreamParentSource, FBCommentStreamChildSource> {

	NSMutableOrderedSet* _sources;
	map<id<FBCommentStreamChildSource>, unsigned long, std::__1::less<id<FBCommentStreamChildSource> >, std::__1::allocator<std::__1::pair<const id<FBCommentStreamChildSource>, unsigned long> > >* sourceItemCountCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<FBCommentStreamParentSource> parentSource; 
-(void)insertSource:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)childSources;
-(ItemChangeset*)flattenedChangesetAndUpdateCacheForSource:(id)arg1 changeset:(const ItemChangeset*)arg2 ;
-(long long)indexForSource:(id)arg1 index:(long long)arg2 ;
-(void)enqueueChangeset:(const ItemChangeset*)arg1 forChildSource:(id)arg2 ;
-(void)removeSource:(id)arg1 ;
-(id)init;
-(void)addSource:(id)arg1 ;
@end
