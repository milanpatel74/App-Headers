/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ADCDeviceData : NSObject {

	NSString* odin1_;
	NSString* open_udid_;
	NSString* mac_sha1_;
	NSString* custom_id_;
	NSString* vendor_id_;
	NSString* advertiser_id_;
	NSString* brand_;
	NSString* model_;
	NSString* type_;
	NSString* os_name_;
	NSString* os_version_;
	NSString* network_speed_;
	NSString* network_type_;
	NSString* carrier_;
	NSString* language_;
	NSString* locale_;
	int screen_width_;
	int screen_height_;
	BOOL retina_;
	BOOL internet_working_;
	BOOL limit_tracking_;
	int capabilities_mask_;
	BOOL network_active_;
	BOOL _retina;

}

@property (readonly) NSString * vendor_id; 
@property (readonly) NSString * advertiser_id; 
@property (readonly) NSString * odin1; 
@property (readonly) NSString * open_udid; 
@property (readonly) NSString * mac_sha1; 
@property (readonly) NSString * custom_id; 
@property (readonly) NSString * brand; 
@property (readonly) NSString * model; 
@property (readonly) NSString * type; 
@property (readonly) NSString * os_name; 
@property (readonly) NSString * os_version; 
@property (readonly) NSString * network_speed; 
@property (readonly) NSString * network_type; 
@property (readonly) NSString * carrier; 
@property (readonly) NSString * language; 
@property (readonly) NSString * locale; 
@property (readonly) int screen_width; 
@property (readonly) int screen_height; 
@property (readonly) BOOL retina;                           //@synthesize retina=_retina - In the implementation block
@property (readonly) BOOL internet_working; 
@property (readonly) BOOL limit_tracking; 
@property (readonly) int capabilities_mask; 
@property (assign) BOOL network_active; 
-(BOOL)internet_working;
-(void)initInfo;
-(id)machine;
-(BOOL)isTablet;
-(void)updateCustomID:(id)arg1 ;
-(BOOL)supportsCalendar;
-(BOOL)supportsMail;
-(void)updateAttributes;
-(id)calcODIN1;
-(id)getMacAddress;
-(NSString *)odin1;
-(NSString *)open_udid;
-(NSString *)mac_sha1;
-(NSString *)custom_id;
-(NSString *)vendor_id;
-(NSString *)advertiser_id;
-(NSString *)brand;
-(NSString *)os_name;
-(NSString *)os_version;
-(NSString *)network_speed;
-(NSString *)network_type;
-(int)screen_width;
-(int)screen_height;
-(NSString *)carrier;
-(BOOL)limit_tracking;
-(int)capabilities_mask;
-(BOOL)network_active;
-(void)setNetwork_active:(BOOL)arg1 ;
-(BOOL)retina;
-(BOOL)isSimulator;
-(id)init;
-(NSString *)type;
-(NSString *)model;
-(void)update;
-(NSString *)locale;
-(NSString *)language;
-(BOOL)supportsPhoneCalls;
-(BOOL)supportsSMS;
@end
