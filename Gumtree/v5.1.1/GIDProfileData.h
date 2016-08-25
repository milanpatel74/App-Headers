/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface GIDProfileData : NSObject <NSCoding> {

	NSString* _imageURL;
	NSString* _email;
	NSString* _name;
	NSString* _givenName;
	NSString* _familyName;

}

@property (nonatomic,readonly) NSString * email;                   //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * givenName;               //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) NSString * familyName;              //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
-(id)imageURLWithDimension:(unsigned long long)arg1 ;
-(NSString *)givenName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)familyName;
-(BOOL)hasImage;
-(NSString *)email;
-(id)initWithAuthentication:(id)arg1 ;
@end
