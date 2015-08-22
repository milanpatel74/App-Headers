/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNFormViewController.h>
#import <Twitter/T1NewLinkedCardFormDelegate.h>
#import <Twitter/TFNHTMLTextViewDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@protocol T1AddNewLinkedCardFormViewControllerDelegate;
@class TFNButton, TFNHTMLTextView, TFNHUD, TFNTwitterAccount, T1NewLinkedCardForm, UIViewController, TFNKVODispatcher, NSDictionary, TFNAttributedTextView, NSString;

@interface T1AddNewLinkedCardFormViewController : TFNFormViewController <T1NewLinkedCardFormDelegate, TFNHTMLTextViewDelegate, TFNTwitterAuthenticated> {

	TFNButton* _submitButton;
	TFNHTMLTextView* _legalSubtextView;
	TFNHUD* _hud;
	unsigned long long _supportedCardTypes;
	TFNTwitterAccount* _account;
	T1NewLinkedCardForm* _form;
	id<T1AddNewLinkedCardFormViewControllerDelegate> _cardControllerDelegate;
	UIViewController* _parent;
	TFNKVODispatcher* _contentSizeObserver;
	NSDictionary* _termsURLMapping;

}

@property (nonatomic,readonly) CGSize formSize; 
@property (nonatomic,readonly) BOOL isEditing; 
@property (nonatomic,readonly) T1NewLinkedCardForm * form;                                                                //@synthesize form=_form - In the implementation block
@property (nonatomic,readonly) TFNAttributedTextView * legalSubtextView;                                                  //@synthesize legalSubtextView=_legalSubtextView - In the implementation block
@property (nonatomic,readonly) TFNHUD * hud; 
@property (assign,nonatomic,__weak) id<T1AddNewLinkedCardFormViewControllerDelegate> cardControllerDelegate;              //@synthesize cardControllerDelegate=_cardControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parent;                                                            //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) TFNKVODispatcher * contentSizeObserver;                                                    //@synthesize contentSizeObserver=_contentSizeObserver - In the implementation block
@property (nonatomic,readonly) NSDictionary * termsURLMapping;                                                            //@synthesize termsURLMapping=_termsURLMapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                                 //@synthesize account=_account - In the implementation block
-(void)submitForm:(id)arg1 ;
-(unsigned long long)inputRequiredBehavior;
-(id)submitButton;
-(id)initWithAccount:(id)arg1 supportedCardTypes:(unsigned long long)arg2 withDelegate:(id)arg3 ;
-(void)htmlTextView:(id)arg1 didTapLink:(id)arg2 ;
-(void)htmlTextViewHandleUserAccessibilityTap:(id)arg1 ;
-(id)initWithAccount:(id)arg1 supportedCardTypes:(unsigned long long)arg2 withDelegate:(id)arg3 parentController:(id)arg4 ;
-(void)setCardControllerDelegate:(id<T1AddNewLinkedCardFormViewControllerDelegate>)arg1 ;
-(void)_setupLegalFooter;
-(void)_paymentProfilesChanged:(id)arg1 ;
-(id<T1AddNewLinkedCardFormViewControllerDelegate>)cardControllerDelegate;
-(void)_resignFirstResponderIfNeeded;
-(BOOL)alreadyHasLinkedCard:(id)arg1 ;
-(void)_addOfferCreditCardCompletedForNewCard:(id)arg1 withSuccess:(BOOL)arg2 object:(id)arg3 error:(id)arg4 ;
-(TFNAttributedTextView *)legalSubtextView;
-(void)_goToTermsForUrlString:(id)arg1 ;
-(void)cardFormShowRegisteredCardsTapped:(id)arg1 ;
-(void)updateExistingCardsTextLeftAlignment:(double)arg1 ;
-(void)setFormInteractionEnabled:(BOOL)arg1 ;
-(TFNKVODispatcher *)contentSizeObserver;
-(NSDictionary *)termsURLMapping;
-(id)merchantName;
-(void)dealloc;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)isEditing;
-(void)viewDidLoad;
-(T1NewLinkedCardForm *)form;
-(void)_dismiss;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNHUD *)hud;
-(UIViewController *)parent;
-(void)setParent:(UIViewController *)arg1 ;
-(id)footerItems;
-(CGSize)formSize;
@end
