/* IL2CPP: Rotatelab.UI.CurrencyListenerText$$OnDisable
void Rotatelab_UI_CurrencyListenerText__OnDisable (Rotatelab_UI_CurrencyListenerText_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CurrencyListenerText$$OnDisable
   void Rotatelab_UI_CurrencyListenerText__OnDisable (Rotatelab_UI_CurrencyListenerText_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_CurrencyListenerText__OnDisable_1116018(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  
  pcVar7 = (char *)(_UNK_011260fc + 0x112602c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126100 + 0x1126040));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126104 + 0x112604c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126108 + 0x1126058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112610c + 0x1126064));
    *pcVar7 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01126110 + 0x1126078));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                    (iVar1,*(undefined4 *)(param_1 + 0x14),0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01126114 + 0x11260b0));
  System_Action_long____ctor_1f10724(uVar2,param_1,**(undefined4 **)(_UNK_01126118 + 0x11260cc),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = **(int **)(_UNK_0112611c + 0x11260f0);
  iVar3 = *(int *)(iVar1 + 0x10);
  while( true ) {
    iVar4 = System_Delegate__Remove_2bbcc8c(iVar3,uVar2,0);
    iVar8 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x18);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768(iVar8);
    }
    iVar5 = 0;
    if ((iVar4 != 0) && (iVar5 = thunk_FUN_00f00bc8(iVar4,iVar8), iVar5 == 0)) break;
    iVar4 = FUN_00efd180((int *)(iVar1 + 0x10),iVar5,iVar3);
    bVar9 = iVar4 == iVar3;
    iVar3 = iVar4;
    if (bVar9) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(iVar4,iVar8);
}

