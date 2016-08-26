/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamListener.h>

@class FBStream, FBMemReactionComponentsUnit, FBMemReactionPaginatedAggregationComponent, NSHashTable, NSString;

@interface FBReactionHorizontalScrollCustomPaginationHandler : NSObject <FBStreamListener> {

	FBStream* _stream;
	FBMemReactionComponentsUnit* _unit;
	FBMemReactionPaginatedAggregationComponent* _unitComponent;
	NSHashTable* _listeners;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;                                //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> unitComponent;              //@synthesize unitComponent=_unitComponent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 ;
-(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)unitComponent;
-(void)loadMoreUnits;
-(id)initWithSession:(id)arg1 reactionUnit:(id)arg2 reactionUnitComponent:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
@end
