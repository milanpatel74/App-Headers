/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionStoreStateModifying.h>

@protocol FBConnectionPageProtocol;
@class FBGraphQLConnectionInsertionLocation, NSDictionary, NSArray, NSString;

@interface FBGraphQLConnectionStoreInsertion : NSObject <FBGraphQLConnectionStoreStateModifying> {

	id<FBConnectionPageProtocol> _connectionPage;
	FBGraphQLConnectionInsertionLocation* _targetLocation;
	NSDictionary* _userInfo;
	NSArray* _edgeFilters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)transitionsFromState:(id)arg1 ;
-(id)initWithConnectionPage:(id)arg1 targetLocation:(id)arg2 userInfo:(id)arg3 edgeFilters:(id)arg4 ;
-(id)_transitionStatesForInsertingGapFillFromState:(id)arg1 ;
-(id)_transitionStatesForInsertingAtHeadFromState:(id)arg1 ;
-(id)_transitionStatesForInsertingAtTailFromState:(id)arg1 ;
-(id)_transitionStatesForInsertingInitialFromState:(id)arg1 ;
-(id)_filteredEdgesAtChunkIndex:(unsigned long long)arg1 state:(id)arg2 locationType:(unsigned long long)arg3 ;
-(id)_transitionStatesForInsertingGapFillFirstFromState:(id)arg1 chunkIndexToModify:(unsigned long long)arg2 ;
-(id)_transitionStatesForInsertingGapFillLastFromState:(id)arg1 chunkIndexToModify:(unsigned long long)arg2 ;
@end
