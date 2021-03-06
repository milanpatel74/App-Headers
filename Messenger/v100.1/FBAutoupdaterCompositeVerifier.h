/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoupdaterVerifier.h>

@class NSArray, NSString;

@interface FBAutoupdaterCompositeVerifier : NSObject <FBAutoupdaterVerifier> {

	NSArray* _verifiers;

}

@property (nonatomic,copy) NSArray * verifiers;                     //@synthesize verifiers=_verifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVerifiers:(id)arg1 ;
-(BOOL)verifyUpdate:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(NSArray *)verifiers;
-(void)setVerifiers:(NSArray *)arg1 ;
@end

