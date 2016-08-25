/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ECAPILocation : NSObject {

	NSString* _locationID;
	NSString* _canonicalName;
	NSString* _localizedName;
	double _latitude;
	double _longitude;
	NSMutableArray* _children;
	NSString* _parentID;
	NSString* _breadcrumb;
	NSString* _isLeaf;
	NSString* _regionLabel;
	NSMutableArray* _regions;
	NSString* _suggestionType;
	NSString* _suggestionKeyword;

}

@property (nonatomic,retain) NSString * locationID;                     //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,retain) NSString * canonicalName;                  //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                  //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) double latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;                 //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSString * parentID;                       //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) NSString * breadcrumb;                     //@synthesize breadcrumb=_breadcrumb - In the implementation block
@property (nonatomic,retain) NSString * isLeaf;                         //@synthesize isLeaf=_isLeaf - In the implementation block
@property (nonatomic,retain) NSString * regionLabel;                    //@synthesize regionLabel=_regionLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * regions;                  //@synthesize regions=_regions - In the implementation block
@property (nonatomic,retain) NSString * suggestionType;                 //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) NSString * suggestionKeyword;              //@synthesize suggestionKeyword=_suggestionKeyword - In the implementation block
-(void)setLocationID:(NSString *)arg1 ;
-(void)setIsLeaf:(NSString *)arg1 ;
-(void)setRegionLabel:(NSString *)arg1 ;
-(NSString *)regionLabel;
-(NSString *)suggestionType;
-(void)setSuggestionType:(NSString *)arg1 ;
-(NSString *)suggestionKeyword;
-(void)setSuggestionKeyword:(NSString *)arg1 ;
-(double)latitude;
-(double)longitude;
-(id)init;
-(id)description;
-(NSString *)localizedName;
-(NSString *)parentID;
-(void)setParentID:(NSString *)arg1 ;
-(void)setCanonicalName:(NSString *)arg1 ;
-(NSString *)canonicalName;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)regions;
-(void)addRegion:(id)arg1 ;
-(NSString *)locationID;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)addChild:(id)arg1 ;
-(NSMutableArray *)children;
-(NSString *)isLeaf;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setBreadcrumb:(NSString *)arg1 ;
-(NSString *)breadcrumb;
@end
