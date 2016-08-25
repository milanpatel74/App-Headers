/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray, NSDictionary, NSArray, NSURLRequest, NSData;

@interface HTTPRequestSpecifier : NSObject {

	int httpMethod_;
	NSString* address_;
	float timeout_;
	int messageCorruptionRetries_;
	NSMutableDictionary* parameters_;
	NSMutableDictionary* fileParameters_;
	NSMutableArray* variablesToUseToComputeNonce_;
	NSString* stringBoundary_;
	int _messageConnectionRetries;

}

@property (assign,nonatomic) int messageConnectionRetries;                        //@synthesize messageConnectionRetries=_messageConnectionRetries - In the implementation block
@property (assign,nonatomic) float timeoutLength; 
@property (assign,nonatomic) int httpMethod; 
@property (nonatomic,retain) NSDictionary * parameters; 
@property (nonatomic,retain) NSDictionary * fileParameters; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,retain) NSArray * variablesToUseToComputeNonce; 
@property (nonatomic,readonly) NSString * nonce; 
@property (nonatomic,readonly) NSURLRequest * urlRequest; 
@property (nonatomic,readonly) NSString * getAddress; 
@property (nonatomic,readonly) NSString * postAddress; 
@property (nonatomic,readonly) NSString * finalAddress; 
@property (nonatomic,readonly) NSData * postBody; 
@property (nonatomic,readonly) NSData * getBody; 
@property (nonatomic,readonly) NSData * finalBody; 
@property (nonatomic,retain) NSString * stringBoundary; 
@property (nonatomic,readonly) NSData * debugBody; 
@property (nonatomic,readonly) NSData * debugPostBody; 
+(id)requestSpecifierForAddress:(id)arg1 ;
-(int)messageConnectionRetries;
-(void)setMessageConnectionRetries:(int)arg1 ;
-(float)timeoutLength;
-(void)setTimeoutLength:(float)arg1 ;
-(void)addParameter:(id)arg1 forKey:(id)arg2 ;
-(void)addFileSpecifier:(id)arg1 forKey:(id)arg2 ;
-(void)setFileParameters:(NSDictionary *)arg1 ;
-(void)setStringBoundary:(NSString *)arg1 ;
-(void)setVariablesToUseToComputeNonce:(NSArray *)arg1 ;
-(NSDictionary *)fileParameters;
-(NSArray *)variablesToUseToComputeNonce;
-(NSString *)finalAddress;
-(NSData *)finalBody;
-(NSString *)stringBoundary;
-(NSData *)getBody;
-(id)postBodyWithDebug:(BOOL)arg1 ;
-(NSData *)debugPostBody;
-(NSString *)getAddress;
-(NSString *)postAddress;
-(NSData *)debugBody;
-(void)addFileAtPath:(id)arg1 forKey:(id)arg2 ;
-(void)addFileAtPath:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 ;
-(void)addVariableToComputeNonceOn:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)addParametersFromDictionary:(id)arg1 ;
-(NSURLRequest *)urlRequest;
-(NSString *)address;
-(void)setHttpMethod:(int)arg1 ;
-(NSString *)nonce;
-(int)httpMethod;
-(NSData *)postBody;
@end
