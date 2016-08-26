/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:12:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/CF12D463-F5F0-40C2-A761-CC2E709AB052/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface ADJActivityPackage : NSObject <NSCoding> {

	int _activityKind;
	NSString* _path;
	NSString* _clientSdk;
	NSDictionary* _parameters;
	NSString* _suffix;

}

@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * clientSdk;                     //@synthesize clientSdk=_clientSdk - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) int activityKind;                       //@synthesize activityKind=_activityKind - In the implementation block
@property (nonatomic,copy) NSString * suffix;                        //@synthesize suffix=_suffix - In the implementation block
-(NSString *)clientSdk;
-(void)setActivityKind:(int)arg1 ;
-(void)setClientSdk:(NSString *)arg1 ;
-(id)extendedString;
-(int)activityKind;
-(id)successMessage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(id)failureMessage;
@end
