/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ECAPIAlert : NSObject {

	NSString* _alertID;
	NSString* _alertType;
	NSString* _frequency;
	NSString* _searchDescription;
	NSString* _searchLink;
	NSMutableArray* _destinations;

}

@property (nonatomic,retain) NSString * alertID;                         //@synthesize alertID=_alertID - In the implementation block
@property (nonatomic,retain) NSString * alertType;                       //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,retain) NSString * frequency;                       //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,retain) NSString * searchDescription;               //@synthesize searchDescription=_searchDescription - In the implementation block
@property (nonatomic,retain) NSString * searchLink;                      //@synthesize searchLink=_searchLink - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(NSString *)alertID;
-(NSString *)searchLink;
-(void)setAlertID:(NSString *)arg1 ;
-(void)setSearchLink:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(NSString *)frequency;
-(void)setFrequency:(NSString *)arg1 ;
-(NSMutableArray *)destinations;
-(void)addDestination:(id)arg1 ;
-(void)setAlertType:(NSString *)arg1 ;
-(NSString *)alertType;
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(NSString *)searchDescription;
-(void)setSearchDescription:(NSString *)arg1 ;
@end
