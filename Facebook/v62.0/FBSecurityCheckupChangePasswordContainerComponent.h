/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBTextFieldComponent, FBUserSession, NSString;

@interface FBSecurityCheckupChangePasswordContainerComponent : CKCompositeComponent {

	FBTextFieldComponent* _passwordOldTextField;
	FBTextFieldComponent* _passwordNewTextField;
	FBTextFieldComponent* _repeatedPasswordNewTextField;
	SEL _savedAction;
	FBUserSession* _session;
	NSString* _source;

}

@property (nonatomic,retain) FBTextFieldComponent * passwordOldTextField;                      //@synthesize passwordOldTextField=_passwordOldTextField - In the implementation block
@property (nonatomic,retain) FBTextFieldComponent * passwordNewTextField;                      //@synthesize passwordNewTextField=_passwordNewTextField - In the implementation block
@property (nonatomic,retain) FBTextFieldComponent * repeatedPasswordNewTextField;              //@synthesize repeatedPasswordNewTextField=_repeatedPasswordNewTextField - In the implementation block
@property (assign,nonatomic) SEL savedAction;                                                  //@synthesize savedAction=_savedAction - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * source;                                                  //@synthesize source=_source - In the implementation block
+(id)newWithSavedAction:(SEL)arg1 context:(id)arg2 ;
-(SEL)savedAction;
-(void)setSavedAction:(SEL)arg1 ;
-(FBTextFieldComponent *)passwordOldTextField;
-(void)setPasswordOldTextField:(FBTextFieldComponent *)arg1 ;
-(FBTextFieldComponent *)passwordNewTextField;
-(void)setPasswordNewTextField:(FBTextFieldComponent *)arg1 ;
-(FBTextFieldComponent *)repeatedPasswordNewTextField;
-(void)setRepeatedPasswordNewTextField:(FBTextFieldComponent *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)becomeFirstResponder;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
