/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUAutoSuggestionsViewController.h>
#import <eBay/SearchAutoSuggestionDelegate.h>

@class UITextField, UIView, SearchAutoSuggestionManager;

@interface EBUSearchSuggestionsViewController : EBUAutoSuggestionsViewController <SearchAutoSuggestionDelegate> {

	BOOL _shouldShowUsernameSuggestion;
	BOOL _shouldShowRecentSuggestions;
	UITextField* _textField;
	UIView* _searchesContainer;
	SearchAutoSuggestionManager* _autoSuggestionManager;

}

@property (nonatomic,retain) SearchAutoSuggestionManager * autoSuggestionManager;              //@synthesize autoSuggestionManager=_autoSuggestionManager - In the implementation block
@property (assign,nonatomic,__weak) UITextField * textField;                                   //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) UIView * searchesContainer;                                //@synthesize searchesContainer=_searchesContainer - In the implementation block
@property (assign,nonatomic) BOOL shouldShowUsernameSuggestion;                                //@synthesize shouldShowUsernameSuggestion=_shouldShowUsernameSuggestion - In the implementation block
@property (assign,nonatomic) BOOL shouldShowRecentSuggestions;                                 //@synthesize shouldShowRecentSuggestions=_shouldShowRecentSuggestions - In the implementation block
+(id)makeController;
-(void)dismissThisView;
-(void)setupViewForCurrentTheme;
-(void)presentThisView;
-(void)setShouldShowUsernameSuggestion:(BOOL)arg1 ;
-(void)setShouldShowRecentSuggestions:(BOOL)arg1 ;
-(BOOL)shouldShowRecentSuggestions;
-(BOOL)shouldShowUsernameSuggestion;
-(void)foundSearchSuggestions:(id)arg1 forSearchTerm:(id)arg2 addUsernameSuggestionIfValid:(BOOL)arg3 ;
-(id)highlightedTitleForSuggestion:(id)arg1 ;
-(UIView *)searchesContainer;
-(void)setSearchesContainer:(UIView *)arg1 ;
-(SearchAutoSuggestionManager *)autoSuggestionManager;
-(void)setAutoSuggestionManager:(SearchAutoSuggestionManager *)arg1 ;
-(void)generateSuggestionsFromSearchTerm:(id)arg1 ;
-(void)foundAutoSuggestions:(id)arg1 forSearchTerm:(id)arg2 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)dismissKeyboard;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end

