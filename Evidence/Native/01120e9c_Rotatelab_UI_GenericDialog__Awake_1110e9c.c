/* IL2CPP: Rotatelab.UI.GenericDialog$$Awake
void Rotatelab_UI_GenericDialog__Awake (Rotatelab_UI_GenericDialog_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$Awake
   void Rotatelab_UI_GenericDialog__Awake (Rotatelab_UI_GenericDialog_o* __this, const MethodInfo*
   method); */

void Rotatelab_UI_GenericDialog__Awake_1110e9c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  pcVar3 = (char *)(_UNK_01120fa0 + 0x1120eb0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120fa4 + 0x1120ec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120fa8 + 0x1120ed0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120fac + 0x1120edc));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_01120fb0 + 0x1120f00);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_01120fb4 + 0x1120f20),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar4,uVar1,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_01120fb8 + 0x1120f78),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar1,uVar1,0);
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar3 = '\x01';
  }
  iVar6 = *(int *)(iVar4 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar6 + 8);
  uVar5 = *(uint *)(iVar6 + 0xc);
  piVar2 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar5 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar5 + 1;
    puVar7 = (undefined4 *)(iVar8 + uVar5 * 4 + 0x10);
    *puVar7 = uVar1;
    thunk_FUN_00ec5080(puVar7,uVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar6,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar4 + 0x14) = 1;
  return;
}

