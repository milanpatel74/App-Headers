/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface FBEventsInviteInvitableEntry : NSObject {

	BOOL _disabled;
	NSString* _title;
	NSString* _subtitle;
	NSURL* _imageURL;
	NSString* _token;
	NSString* _firstName;
	NSString* _lastName;
	NSArray* _nameSearchTokens;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL disabled;                         //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSArray * nameSearchTokens;              //@synthesize nameSearchTokens=_nameSearchTokens - In the implementation block
-(NSArray *)nameSearchTokens;
-(id)firstNameForSort;
-(id)lastNameForSort;
-(id)initWithUnknownEventInvitableEntry:(id)arg1 ;
-(void)setNameSearchTokens:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
@end
