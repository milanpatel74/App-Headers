/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNSecureMessagingRegisterResponsePayload : NSObject <TBase, NSCoding> {

	BOOL __is_primary_device;
	BOOL __is_primary_device_isset;

}

@property (assign,setter=setIs_primary_device:,getter=is_primary_device,nonatomic) BOOL is_primary_device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setIs_primary_device:(BOOL)arg1 ;
-(id)initWithIs_primary_device:(BOOL)arg1 ;
-(BOOL)is_primary_device;
-(BOOL)is_primary_deviceIsSet;
-(void)unsetIs_primary_device;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end
