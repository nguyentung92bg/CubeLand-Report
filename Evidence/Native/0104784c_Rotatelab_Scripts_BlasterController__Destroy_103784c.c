/* IL2CPP: Rotatelab.Scripts.BlasterController$$Destroy
void Rotatelab_Scripts_BlasterController__Destroy (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$Destroy
   void Rotatelab_Scripts_BlasterController__Destroy (Rotatelab_Scripts_BlasterController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__Destroy_103784c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_01047b78 + 0x1047864);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b7c + 0x1047878));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b80 + 0x1047884));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b84 + 0x1047890));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b88 + 0x104789c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b8c + 0x10478a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b90 + 0x10478b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b94 + 0x10478c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b98 + 0x10478cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047b9c + 0x10478d8));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(char *)((int)param_1 + 0xc1) == '\0') {
    *(undefined1 *)((int)param_1 + 0xc1) = 1;
    Rotatelab_Scripts_BlasterController__CollectJewelHeist_1033e58(param_1);
    (**(code **)(*param_1 + 0x150))(param_1,10,*(undefined4 *)(*param_1 + 0x154));
    if (param_1[0x46] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_48,param_1[0x46],**(undefined4 **)(_UNK_01047ba0 + 0x1047948));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar6 = *(undefined4 **)(_UNK_01047ba4 + 0x1047978);
    piVar7 = *(int **)(_UNK_01047ba8 + 0x1047980);
    while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_38,*puVar6), iVar3 = iStack_2c, iVar1 != 0) {
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Behaviour__set_enabled_35fd7dc(iStack_2c,0,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce4684(&uStack_48,uVar2,0,0x3ecccccd,0,0,0,0,0,1,0,0,0,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_38,**(undefined4 **)(_UNK_01047bac + 0x1047a30));
    piVar5 = *(int **)(_UNK_01047bb4 + 0x1047a44);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar5;
    }
    puVar6 = *(undefined4 **)(iVar3 + 0x5c);
    iVar1 = puVar6[0xd];
    if (iVar1 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar6 = *(undefined4 **)(*piVar5 + 0x5c);
      }
      uVar2 = *puVar6;
      iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01047bb8 + 0x1047a8c));
      System_Action_object____ctor_1f11414
                (iVar1,uVar2,**(undefined4 **)(_UNK_01047bbc + 0x1047aac),0);
      piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 0x34);
      *piVar5 = iVar1;
      thunk_FUN_00ec5080(piVar5,iVar1);
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Delay_object__15d6154
              (&uStack_48,param_1,0x3ecccccd,iVar1,0,0,**(undefined4 **)(_UNK_01047bc0 + 0x1047af8))
    ;
  }
  return;
}

