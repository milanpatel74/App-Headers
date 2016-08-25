/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSArray;

@interface OptimizelyAFSecurityPolicy : NSObject {

	BOOL _validatesCertificateChain;
	BOOL _allowInvalidCertificates;
	BOOL _validatesDomainName;
	unsigned long long _SSLPinningMode;
	NSArray* _pinnedCertificates;
	NSArray* _pinnedPublicKeys;

}

@property (assign,setter=SLPinningMode,nonatomic) unsigned long long SSLPinningMode;              //@synthesize SSLPinningMode=_SSLPinningMode - In the implementation block
@property (assign,nonatomic) BOOL validatesCertificateChain;                                      //@synthesize validatesCertificateChain=_validatesCertificateChain - In the implementation block
@property (nonatomic,retain) NSArray * pinnedCertificates;                                        //@synthesize pinnedCertificates=_pinnedCertificates - In the implementation block
@property (assign,nonatomic) BOOL allowInvalidCertificates;                                       //@synthesize allowInvalidCertificates=_allowInvalidCertificates - In the implementation block
@property (assign,nonatomic) BOOL validatesDomainName;                                            //@synthesize validatesDomainName=_validatesDomainName - In the implementation block
@property (nonatomic,retain) NSArray * pinnedPublicKeys;                                          //@synthesize pinnedPublicKeys=_pinnedPublicKeys - In the implementation block
+(id)defaultPinnedCertificates;
+(id)policyWithPinningMode:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingPinnedPublicKeys;
+(id)defaultPolicy;
-(void)setSSLPinningMode:(unsigned long long)arg1 ;
-(void)setPinnedCertificates:(NSArray *)arg1 ;
-(void)setValidatesCertificateChain:(BOOL)arg1 ;
-(void)setValidatesDomainName:(BOOL)arg1 ;
-(NSArray *)pinnedCertificates;
-(void)setPinnedPublicKeys:(NSArray *)arg1 ;
-(BOOL)evaluateServerTrust:(SecTrustRef)arg1 forDomain:(id)arg2 ;
-(BOOL)validatesDomainName;
-(unsigned long long)SSLPinningMode;
-(BOOL)allowInvalidCertificates;
-(BOOL)validatesCertificateChain;
-(NSArray *)pinnedPublicKeys;
-(BOOL)evaluateServerTrust:(SecTrustRef)arg1 ;
-(void)setAllowInvalidCertificates:(BOOL)arg1 ;
-(id)init;
@end
