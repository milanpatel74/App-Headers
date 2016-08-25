/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBGeneratedMessage.h>

@class NSString;

@interface GGL_CLEARCUTPlayStoreRpcReport : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) BOOL hasClientLatencyMs; 
@property (assign,nonatomic) unsigned long long clientLatencyMs; 
@property (assign,nonatomic) BOOL hasServerLatencyMs; 
@property (assign,nonatomic) unsigned long long serverLatencyMs; 
@property (assign,nonatomic) BOOL hasNumAttempts; 
@property (assign,nonatomic) unsigned numAttempts; 
@property (assign,nonatomic) BOOL hasTimeoutMs; 
@property (assign,nonatomic) unsigned timeoutMs; 
@property (assign,nonatomic) BOOL hasBackoffMultiplier; 
@property (assign,nonatomic) float backoffMultiplier; 
@property (assign,nonatomic) BOOL hasWasSuccessful; 
@property (assign,nonatomic) BOOL wasSuccessful; 
@property (assign,nonatomic) BOOL hasStartConnectionType; 
@property (assign,nonatomic) int startConnectionType; 
@property (assign,nonatomic) BOOL hasEndConnectionType; 
@property (assign,nonatomic) int endConnectionType; 
@property (assign,nonatomic) BOOL hasResponseBodySizeBytes; 
@property (assign,nonatomic) unsigned responseBodySizeBytes; 
@property (assign,nonatomic) BOOL hasVolleyErrorType; 
@property (assign,nonatomic) int volleyErrorType; 
+(id)descriptor;
@end
