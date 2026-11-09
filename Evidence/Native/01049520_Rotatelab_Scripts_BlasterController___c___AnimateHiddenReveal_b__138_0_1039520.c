/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c$$<AnimateHiddenReveal>b__138_0
void Rotatelab_Scripts_BlasterController___c___AnimateHiddenReveal_b__138_0 (Rotatelab_Scripts_BlasterController___c_o* __this, Rotatelab_Scripts_BlasterController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c$$<AnimateHiddenReveal>b__138_0
   void Rotatelab_Scripts_BlasterController___c___AnimateHiddenReveal_b__138_0
   (Rotatelab_Scripts_BlasterController___c_o* __this, Rotatelab_Scripts_BlasterController_o* this,
   const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___c___AnimateHiddenReveal_b__138_0_1039520
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_01049714 + 0x1049538);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049718 + 0x104954c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104971c + 0x1049558));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049720 + 0x1049564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049724 + 0x1049570));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049728 + 0x104957c));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined1 *)((int)param_2 + 0xc2) = 0;
  Rotatelab_Scripts_BlasterController__SetHiddenModeActive_1031c54(param_2,0);
  if (param_2[0x46] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_38,param_2[0x46],**(undefined4 **)(_UNK_0104972c + 0x10495d8));
  uStack_40 = 0;
  puVar4 = *(undefined4 **)(_UNK_01049730 + 0x10495f8);
  puStack_3c = &uStack_38;
  while( true ) {
    iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_38,*puVar4)
    ;
    iVar1 = iStack_2c;
    if (iVar2 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_01049738 + 0x104968c));
      (**(code **)(*param_2 + 0x110))(param_2,1,*(undefined4 *)(*param_2 + 0x114));
      return;
    }
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_01049734 + 0x1049618));
    if (iVar2 == 0) break;
    Rotatelab_Scripts_BlasterColorDataSo__GetConnectionColorByType_ff4c38
              (&uStack_50,iVar2,param_2[0x43],0,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ConnectionController__UpdateColor_1039740
              (iVar1,uStack_50,uStack_4c,uStack_48,uStack_44);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

