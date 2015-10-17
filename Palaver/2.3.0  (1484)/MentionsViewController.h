/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PLVUserPreferences, NSArray;

@interface MentionsViewController : UITableViewController {

	PLVUserPreferences* _userPreferences;
	NSArray* _mentionKeywords;

}

@property (nonatomic,readonly) PLVUserPreferences * userPreferences;              //@synthesize userPreferences=_userPreferences - In the implementation block
@property (nonatomic,retain) NSArray * mentionKeywords;                           //@synthesize mentionKeywords=_mentionKeywords - In the implementation block
-(PLVUserPreferences *)userPreferences;
-(NSArray *)mentionKeywords;
-(void)setMentionKeywords:(NSArray *)arg1 ;
-(id)initWithUserPreferences:(id)arg1 ;
-(void)addButton;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

