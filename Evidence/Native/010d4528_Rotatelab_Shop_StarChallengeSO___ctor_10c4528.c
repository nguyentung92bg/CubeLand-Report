/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$.ctor
void Rotatelab_Shop_StarChallengeSO___ctor (Rotatelab_Shop_StarChallengeSO_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$.ctor
   void Rotatelab_Shop_StarChallengeSO___ctor (Rotatelab_Shop_StarChallengeSO_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengeSO___ctor_10c4528(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010d45fc + 0x10d453c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4600 + 0x10d4550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4604 + 0x10d455c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d4608 + 0x10d4568));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d460c + 0x10d4574));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d4610 + 0x10d4588));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_010d4614 + 0x10d459c));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d4618 + 0x10d45c0));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_010d461c + 0x10d45d4));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  pcVar2 = (char *)(_UNK_03615540 + 0x36154c4);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03615544 + 0x36154d8),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03615548 + 0x36154ec) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  System_Object___ctor_2bb93bc(param_1,0);
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361554c + 0x3615514);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03615550 + 0x3615524);
    *(code **)(_UNK_03615554 + 0x3615534) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x0361553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

