/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBMImageUrlCollection;


@protocol FBConversationContact <FBFavoriteContact>
@property (nonatomic,copy,readonly) NSString * contactName; 
@property (nonatomic,readonly) BOOL contactIsEmailOnly; 
@property (nonatomic,readonly) BOOL contactHasMessenger; 
@property (nonatomic,readonly) BOOL contactIsMobilePushable; 
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls; 
@property (nonatomic,copy,readonly) NSString * firstNameForSort; 
@property (nonatomic,copy,readonly) NSString * lastNameForSort; 
@property (nonatomic,copy,readonly) NSString * nonNilFirstNameForSort; 
@property (nonatomic,copy,readonly) NSString * nonNilLastNameForSort; 
@property (nonatomic,readonly) BOOL contactIsMemorialized; 
@property (nonatomic,copy,readonly) NSString * email; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@optional
-(NSString *)email;
-(NSString *)firstName;
-(NSString *)lastName;

@required
-(FBMImageUrlCollection *)imageUrls;
-(NSString *)nonNilFirstNameForSort;
-(NSString *)nonNilLastNameForSort;
-(NSString *)firstNameForSort;
-(NSString *)lastNameForSort;
-(BOOL)contactIsEmailOnly;
-(BOOL)contactHasMessenger;
-(BOOL)contactIsMobilePushable;
-(BOOL)contactIsMemorialized;
-(NSString *)contactName;

@end
