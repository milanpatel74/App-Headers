/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString;

@interface ECAPIForgotPasswordRequest : ECAPIRequestBase {

	NSString* _email;

}

@property (nonatomic,retain) NSString * email;              //@synthesize email=_email - In the implementation block
-(id)init;
-(void)setEmail:(NSString *)arg1 ;
-(id)command;
-(NSString *)email;
-(id)initWithEmail:(id)arg1 ;
@end
