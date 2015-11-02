/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@protocol OS_dispatch_group;
@class NSString, NSObject, CLLocation, UIImage;

@interface WAPlace : NSObject <MKAnnotation> {

	NSObject*<OS_dispatch_group> _infoLoadingGroup;
	NSString* _placeId;
	NSString* _name;
	NSString* _shortAddress;
	NSString* _fullAddress;
	NSString* _urlString;
	NSString* _iconURLString;
	CLLocation* _location;
	double _distance;
	UIImage* _mapThumbnail;
	unsigned long long _source;

}

@property (nonatomic,retain) NSString * placeId;                       //@synthesize placeId=_placeId - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * shortAddress;                  //@synthesize shortAddress=_shortAddress - In the implementation block
@property (nonatomic,retain) NSString * fullAddress;                   //@synthesize fullAddress=_fullAddress - In the implementation block
@property (nonatomic,retain) NSString * urlString;                     //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSString * iconURLString;                 //@synthesize iconURLString=_iconURLString - In the implementation block
@property (nonatomic,retain) CLLocation * location;                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double distance;                          //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) UIImage * mapThumbnail;                   //@synthesize mapThumbnail=_mapThumbnail - In the implementation block
@property (nonatomic,readonly) unsigned long long source;              //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(void)fetchAppleMapsThumbnailForLocation:(id)arg1 completion:(/*^block*/id)arg2 retryOnFail:(BOOL)arg3 ;
+(void)fetchGoogleMapsThumbnailForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)mapPreviewWithPinOverlay:(id)arg1 ;
+(id)WAPlaceWithVCardData:(id)arg1 ;
+(void)initialize;
-(BOOL)placeDetailsFetchNeeded;
-(void)fetchPlaceDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortAddress:(NSString *)arg1 ;
-(void)setFullAddress:(NSString *)arg1 ;
-(NSString *)fullAddress;
-(void)fetchGooglePlaceDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFacebookPlaceDetailsWithCompletion:(/*^block*/id)arg1 ;
-(UIImage *)mapThumbnail;
-(void)setMapThumbnail:(UIImage *)arg1 ;
-(BOOL)mapThumbnailFetchNeeded;
-(void)fetchMapThumbnailWithCompletion:(/*^block*/id)arg1 ;
-(void)setIconURLString:(NSString *)arg1 ;
-(id)initWithSource:(unsigned long long)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)urlString;
-(CGSize)coordinate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(CLLocation *)location;
-(unsigned long long)source;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)shortAddress;
-(NSString *)iconURLString;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(NSString *)placeId;
-(void)setPlaceId:(NSString *)arg1 ;
@end

