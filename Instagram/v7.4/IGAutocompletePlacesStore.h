/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteAbstractStore.h>
#import <Instagram/IGAutocompleteAbstractStoreProtocol.h>

@class NSMutableOrderedSet, NSArray, NSString;

@interface IGAutocompletePlacesStore : IGAutocompleteAbstractStore <IGAutocompleteAbstractStoreProtocol> {

	NSMutableOrderedSet* _places;

}

@property (nonatomic,readonly) NSArray * allPlaces; 
@property (nonatomic,readonly) NSArray * recentPlaces; 
@property (nonatomic,readonly) NSMutableOrderedSet * places;              //@synthesize places=_places - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivePath;
+(id)sharedStore;
-(NSArray *)allPlaces;
-(void)addPlaceToRecent:(id)arg1 ;
-(NSArray *)recentPlaces;
-(NSMutableOrderedSet *)places;
-(id)init;
-(void)clear;
-(void)clearHistory;
-(void)archive;
@end
