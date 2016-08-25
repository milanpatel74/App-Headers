/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GIDCallbackQueue.h>

@class GSDK_GTMOAuth2Authentication, NSError;

@interface GIDAuthFlow : GIDCallbackQueue {

	GSDK_GTMOAuth2Authentication* _auth;
	NSError* _error;

}

@property (nonatomic,retain) GSDK_GTMOAuth2Authentication * auth;              //@synthesize auth=_auth - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(void)setAuth:(GSDK_GTMOAuth2Authentication *)arg1 ;
-(GSDK_GTMOAuth2Authentication *)auth;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end
