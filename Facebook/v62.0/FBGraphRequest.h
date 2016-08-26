/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphBatchParticipatingRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBGraphRequest : FBGraphBatchParticipatingRequest <NSCopying> {

	NSString* _path;
	NSString* _friendlyName;
	NSString* _httpMethod;
	NSDictionary* _parameters;
	NSString* _relativePath;
	BOOL _useMultipartForm;
	BOOL _shouldCompressBody;
	BOOL _useSecureTierHost;
	BOOL _useInternTierHost;
	BOOL _sentUDPPrimingPacket;
	NSString* _version;

}

@property (assign,nonatomic) BOOL includeMigrationBundle; 
@property (nonatomic,copy) NSString * version;                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL useMultipartForm;                    //@synthesize useMultipartForm=_useMultipartForm - In the implementation block
@property (assign,nonatomic) BOOL shouldCompressBody;                  //@synthesize shouldCompressBody=_shouldCompressBody - In the implementation block
@property (assign,nonatomic) BOOL useSecureTierHost;                   //@synthesize useSecureTierHost=_useSecureTierHost - In the implementation block
@property (assign,nonatomic) BOOL useInternTierHost;                   //@synthesize useInternTierHost=_useInternTierHost - In the implementation block
@property (nonatomic,readonly) BOOL sentUDPPrimingPacket;              //@synthesize sentUDPPrimingPacket=_sentUDPPrimingPacket - In the implementation block
-(id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 friendlyName:(id)arg4 callerClass:(Class)arg5 ;
-(id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 ;
-(void)setUseMultipartForm:(BOOL)arg1 ;
-(void)setUseSecureTierHost:(BOOL)arg1 ;
-(id)analyticsName;
-(void)setQueryParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setIncludeMigrationBundle:(BOOL)arg1 ;
-(id)batchParameters;
-(void)setUseInternTierHost:(BOOL)arg1 ;
-(BOOL)sentUDPPrimingPacket;
-(void)setShouldCompressBody:(BOOL)arg1 ;
-(id)requestForUDPPriming;
-(void)setUDPPrimedChannelID:(id)arg1 withRequestForHeader:(id)arg2 ;
-(BOOL)useMultipartForm;
-(void)removeQueryParameterForKey:(id)arg1 ;
-(void)copyMembersFromRequest:(id)arg1 withZone:(NSZone*)arg2 ;
-(BOOL)useInternTierHost;
-(BOOL)useSecureTierHost;
-(BOOL)includeMigrationBundle;
-(unsigned long long)compressionMethod;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)host;
-(id)parameters;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)httpMethod;
-(BOOL)shouldCompressBody;
-(id)relativePath;
@end
