/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@class _TtC7Palaver20ChannelListViewModel, UISearchBar;

@interface Palaver.ChannelListInternalViewController : UITableViewController <UISearchBarDelegate> {

	 viewModel;
	 searchBar;

}

@property (retain,nonatomic) _TtC7Palaver20ChannelListViewModel * viewModel; 
@property (retain,nonatomic) UISearchBar * searchBar; 
-(_TtC7Palaver20ChannelListViewModel *)viewModel;
-(void)setViewModel:(_TtC7Palaver20ChannelListViewModel *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UISearchBar *)searchBar;
-(void)close;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
@end

