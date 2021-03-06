/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECSearchResultsMarkersStrategyProtocol.h>

@class NSMutableDictionary, NSDate, NSString;

@interface ECSearchResultsMarkersTimelineStrategy : NSObject <ECSearchResultsMarkersStrategyProtocol> {

	NSMutableDictionary* _indexesForMarkers;
	NSDate* _firstMarkerDate;
	NSDate* _lastMarkerDate;
	unsigned long long _markersRange;

}

@property (nonatomic,retain) NSMutableDictionary * indexesForMarkers;              //@synthesize indexesForMarkers=_indexesForMarkers - In the implementation block
@property (nonatomic,copy) NSDate * firstMarkerDate;                               //@synthesize firstMarkerDate=_firstMarkerDate - In the implementation block
@property (nonatomic,retain) NSDate * lastMarkerDate;                              //@synthesize lastMarkerDate=_lastMarkerDate - In the implementation block
@property (assign,nonatomic) unsigned long long markersRange;                      //@synthesize markersRange=_markersRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIndexesForMarkers:(NSMutableDictionary *)arg1 ;
-(void)setLastMarkerDate:(NSDate *)arg1 ;
-(void)setFirstMarkerDate:(NSDate *)arg1 ;
-(void)setMarkersRange:(unsigned long long)arg1 ;
-(NSMutableDictionary *)indexesForMarkers;
-(NSDate *)firstMarkerDate;
-(unsigned long long)markersRange;
-(NSDate *)lastMarkerDate;
-(BOOL)shouldDisplayMarkerForIndexPath:(id)arg1 ;
-(id)displayMarkerForIndexPath:(id)arg1 ;
-(void)addMarkersToSection:(id)arg1 index:(long long)arg2 range:(NSRange)arg3 ;
-(void)addMarker:(id)arg1 AtIndexPath:(id)arg2 ;
-(id)init;
-(void)reset;
@end

