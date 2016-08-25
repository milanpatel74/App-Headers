/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSNumber, NSMutableArray, CLLocation;

@interface ECLocation : NSObject <NSCoding, NSCopying> {

	NSString* _identifier;
	NSString* _canonicalName;
	NSString* _localizedShortName;
	NSArray* _parentIDs;
	double _distance;
	double _latitude;
	double _longitude;
	NSString* _distanceID;
	NSString* _breadcrumb;
	NSString* _postcode;
	unsigned long long _locationType;
	unsigned long long _suggestionType;
	NSString* _suggestionKeyword;
	NSNumber* _isLeaf;
	NSString* _localArea;
	NSNumber* _visibleOnMap;
	NSString* _parentID;
	NSString* _localizedName;
	NSMutableArray* _childrenIDArray;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * parentID;                            //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) NSString * canonicalName;                       //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                       //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSMutableArray * childrenIDArray;               //@synthesize childrenIDArray=_childrenIDArray - In the implementation block
@property (assign,nonatomic) double latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSString * distanceID;                          //@synthesize distanceID=_distanceID - In the implementation block
@property (nonatomic,retain) NSString * breadcrumb;                          //@synthesize breadcrumb=_breadcrumb - In the implementation block
@property (nonatomic,retain) NSString * postcode;                            //@synthesize postcode=_postcode - In the implementation block
@property (assign,nonatomic) unsigned long long locationType;                //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) unsigned long long suggestionType;              //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) NSString * suggestionKeyword;                   //@synthesize suggestionKeyword=_suggestionKeyword - In the implementation block
@property (nonatomic,retain) NSNumber * isLeaf;                              //@synthesize isLeaf=_isLeaf - In the implementation block
@property (nonatomic,retain) NSString * localizedShortName;                  //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * childrenIDs; 
@property (nonatomic,__weak,readonly) NSArray * parentIDs;                   //@synthesize parentIDs=_parentIDs - In the implementation block
@property (assign,nonatomic) double distance;                                //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) CLLocation * CLLocation; 
@property (nonatomic,copy) NSString * localArea;                             //@synthesize localArea=_localArea - In the implementation block
@property (nonatomic,copy) NSNumber * visibleOnMap;                          //@synthesize visibleOnMap=_visibleOnMap - In the implementation block
+(id)rootLocationWithID:(id)arg1 localizedName:(id)arg2 canonicalName:(id)arg3 distanceID:(id)arg4 ;
+(id)locationWithAPILocation:(id)arg1 withParentID:(id)arg2 postcode:(id)arg3 locationType:(unsigned long long)arg4 ;
+(id)coalescedLocationFromLocations:(id)arg1 ;
+(id)placeholderLocationWithID:(id)arg1 ;
+(id)possibleDistanceIDsWithRootCategoryId:(id)arg1 ;
+(id)locationWithLocationID:(id)arg1 localizedName:(id)arg2 parentID:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 ;
+(id)locationWithAPILocation:(id)arg1 withParentID:(id)arg2 postcode:(id)arg3 locationType:(unsigned long long)arg4 locationConfig:(id)arg5 ;
+(id)locationWithLocationID:(id)arg1 localizedName:(id)arg2 parentID:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 locationConfig:(id)arg6 ;
+(id)latLongLocationFromPlacemark:(id)arg1 ;
+(id)nameFromCLPlacemark:(id)arg1 maxPartCount:(unsigned long long)arg2 ;
+(id)latLongLocationWithLocalizedName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
+(id)localizedDistanceStringForDistanceID:(id)arg1 ;
+(id)locationWithPostcode:(id)arg1 withLocalizedName:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 ;
+(id)locationWithPostcode:(id)arg1 withLocalizedName:(id)arg2 identifier:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 ;
+(id)possibleDistanceIDs;
+(id)nearestSupportedDistanceIDToDistance:(double)arg1 ;
-(NSString *)distanceID;
-(BOOL)hasIDOrIsFake;
-(NSString *)postcode;
-(NSNumber *)visibleOnMap;
-(void)setVisibleOnMap:(NSNumber *)arg1 ;
-(void)setIsLeaf:(NSNumber *)arg1 ;
-(unsigned long long)suggestionType;
-(NSString *)suggestionKeyword;
-(void)setSuggestionType:(unsigned long long)arg1 ;
-(void)setSuggestionKeyword:(NSString *)arg1 ;
-(id)localizedNameWithPostcodeAndLocalArea;
-(id)localizedNameWithOptionalPostcode;
-(NSArray *)childrenIDs;
-(id)localizedNameWithPostcodeAndLocalAreaOneLineVersion;
-(id)distanceStringHidePlusZero:(BOOL)arg1 ;
-(void)localizedParentNameWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)localizedShortenedNameWithDistanceWithLength:(unsigned long long)arg1 preferPostCode:(BOOL)arg2 ;
-(BOOL)wasObtainedFromGPS;
-(id)localizedNameWithOptionalPostcodeWithDistance;
-(BOOL)isEqualToLocationExceptDistance:(id)arg1 ;
-(id)suggestedKeywordWithLocalizedName;
-(id)localizedParentName;
-(NSMutableArray *)childrenIDArray;
-(void)setChildrenIDArray:(NSMutableArray *)arg1 ;
-(NSString *)localArea;
-(void)setLocalArea:(NSString *)arg1 ;
-(void)setPostcode:(NSString *)arg1 ;
-(void)setDistanceID:(NSString *)arg1 ;
-(void)sortChildIDsUsingComparator:(/*^block*/id)arg1 ;
-(BOOL)isSane;
-(BOOL)hasID;
-(unsigned long long)hashFromDouble:(double)arg1 ;
-(BOOL)isWholeCountry;
-(BOOL)hasLatLong;
-(void)setLocalizedShortName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)removeChild:(id)arg1 ;
-(NSString *)localizedShortName;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setCanonicalName:(NSString *)arg1 ;
-(NSString *)canonicalName;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(unsigned long long)locationType;
-(void)setBreadcrumb:(NSString *)arg1 ;
-(NSString *)breadcrumb;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(void)setLocationType:(unsigned long long)arg1 ;
-(double)latitude;
-(double)longitude;
-(CLLocation *)CLLocation;
-(NSNumber *)isLeaf;
-(NSString *)parentID;
-(NSArray *)parentIDs;
-(void)setParentID:(NSString *)arg1 ;
-(void)addChild:(id)arg1 ;
@end
