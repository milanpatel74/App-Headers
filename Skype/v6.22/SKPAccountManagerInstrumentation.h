/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKPAccountManagerInstrumentation : NSObject {

	unsigned long long _loginStartingPoint;

}

@property (assign,nonatomic) unsigned long long loginStartingPoint;              //@synthesize loginStartingPoint=_loginStartingPoint - In the implementation block
-(void)setLogoutReason:(long long)arg1 ;
-(void)setLoginStartingPoint:(unsigned long long)arg1 ;
-(void)sendDataIfAutologinWasExpectedCrashedFrequentlyInBackground:(BOOL)arg1 ;
-(void)reportLoginMethodAccountLinkedToLive:(BOOL)arg1 ;
-(void)setIsExpectingAutologin:(BOOL)arg1 ;
-(id)buildInstrumentationDictionary:(BOOL)arg1 ;
-(BOOL)isPotentialErrorCase;
-(void)sendInstrumentationData:(BOOL)arg1 ;
-(unsigned long long)loginStartingPoint;
@end
