/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSDictionary;

@interface AdParams2 : NSObject {

	unsigned char ready;
	unsigned char cachedVersion;
	unsigned char parseError;
	unsigned char delegatesNotified;
	int delegateTimeoutValue;
	NSMutableArray* delegates;
	unsigned char fetching;
	NSString* appName;
	NSString* country;
	NSString* geoBucket;
	NSString* paramURL;
	double paramsDownloadTime;
	NSDictionary* params;
	NSDictionary* sections;

}

@property (readonly) unsigned char ready; 
@property (assign) unsigned char cachedVersion; 
@property (assign) unsigned char parseError; 
@property (retain) NSString * appName; 
@property (retain) NSString * paramURL; 
@property (retain) NSString * country; 
@property (retain) NSString * geoBucket; 
@property (assign) double paramsDownloadTime; 
-(void)getCountry;
-(void)setGeoBucket:(NSString *)arg1 ;
-(void)delegateTimedout;
-(void)notifyParamsReady;
-(void)findGeoBucket;
-(void)getRemoteParams:(id)arg1 ;
-(void)setParamURL:(NSString *)arg1 ;
-(void)setDelegateTimeout:(int)arg1 ;
-(NSString *)geoBucket;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(id)objectForSection:(id)arg1 ;
-(NSString *)paramURL;
-(unsigned char)cachedVersion;
-(void)setCachedVersion:(unsigned char)arg1 ;
-(void)setParseError:(unsigned char)arg1 ;
-(double)paramsDownloadTime;
-(void)setParamsDownloadTime:(double)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(void)setAppName:(NSString *)arg1 ;
-(unsigned char)parseError;
-(void)addDelegate:(id)arg1 ;
-(NSString *)appName;
-(void)refresh;
-(unsigned char)ready;
-(id)getName;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
@end
