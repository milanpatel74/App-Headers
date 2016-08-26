/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhoneNumber;
@class NSString;

@interface FBContactPoint : NSObject {

	int _type;
	id<FBPhoneNumber> _phoneNumber;
	NSString* _emailAddress;

}

@property (nonatomic,retain) id<FBPhoneNumber> phoneNumber;                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * normalizedString; 
-(id)debugDescription;
-(void)setType:(int)arg1 ;
-(int)type;
-(id<FBPhoneNumber>)phoneNumber;
-(id)initWithPhoneNumber:(id)arg1 ;
-(NSString *)normalizedString;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPhoneNumber:(id<FBPhoneNumber>)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
@end
