/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPChatViewModel.h>
#import <Skype/SKPShareContactsContactsViewControllerDelegate.h>
#import <Skype/SKPPreviewing.h>

@class NSString, NSURL;

@interface SKPShareContactsViewModel : SKPChatViewModel <SKPShareContactsContactsViewControllerDelegate, SKPPreviewing> {

	BOOL _singleContact;
	NSString* _title;
	NSString* _secondaryTitle;
	NSString* _body;
	NSString* _placeholderIcon;
	NSString* _accessibilityLabel;
	NSString* _accessibilityHint;
	NSString* _conversationIdentity;
	long long _authorization;
	NSURL* _avatarImageURL;

}

@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * secondaryTitle;                              //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) NSString * body;                                        //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * placeholderIcon;                             //@synthesize placeholderIcon=_placeholderIcon - In the implementation block
@property (nonatomic,retain) NSString * accessibilityLabel;                          //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,retain) NSString * accessibilityHint;                           //@synthesize accessibilityHint=_accessibilityHint - In the implementation block
@property (nonatomic,retain) NSString * conversationIdentity;                        //@synthesize conversationIdentity=_conversationIdentity - In the implementation block
@property (assign,nonatomic) long long authorization;                                //@synthesize authorization=_authorization - In the implementation block
@property (nonatomic,retain) NSURL * avatarImageURL;                                 //@synthesize avatarImageURL=_avatarImageURL - In the implementation block
@property (assign,getter=isSingleContact,nonatomic) BOOL singleContact;              //@synthesize singleContact=_singleContact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)encodingVersion;
+(Class)defaultCellClass;
+(id)observedKeyPaths;
-(long long)refreshDueToChangeInModelProperty:(id)arg1 ;
-(NSString *)placeholderIcon;
-(BOOL)isSingleContact;
-(NSURL *)avatarImageURL;
-(id)skp_previewControllerForObject;
-(void)didSelectItemWithChatViewController:(id)arg1 ;
-(NSString *)conversationIdentity;
-(void)setConversationIdentity:(NSString *)arg1 ;
-(long long)authorization;
-(void)setAuthorization:(long long)arg1 ;
-(void)setPlaceholderIcon:(NSString *)arg1 ;
-(void)shareContactsContactsViewControllerDidCancel:(id)arg1 ;
-(void)shareContactsContactsViewController:(id)arg1 didSelectContact:(id)arg2 withCompletedBlock:(/*^block*/id)arg3 ;
-(void)setSingleContact:(BOOL)arg1 ;
-(void)setAvatarImageURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)accessibilityLabel;
-(NSString *)body;
-(NSString *)accessibilityHint;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)secondaryTitle;
-(void)setSecondaryTitle:(NSString *)arg1 ;
@end
