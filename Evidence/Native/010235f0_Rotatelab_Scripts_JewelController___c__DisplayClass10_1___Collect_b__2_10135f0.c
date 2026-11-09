/* IL2CPP: Rotatelab.Scripts.JewelController.<>c__DisplayClass10_1$$<Collect>b__2
void Rotatelab_Scripts_JewelController___c__DisplayClass10_1___Collect_b__2 (Rotatelab_Scripts_JewelController___c__DisplayClass10_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.JewelController.<>c__DisplayClass10_1$$<Collect>b__2
   void Rotatelab_Scripts_JewelController___c__DisplayClass10_1___Collect_b__2
   (Rotatelab_Scripts_JewelController___c__DisplayClass10_1_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_JewelController___c__DisplayClass10_1___Collect_b__2_10135f0(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_010236a0 + 0x1023604);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010236a4 + 0x1023618));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
  if (*(int *)(**(int **)(_UNK_010236a8 + 0x102365c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__Destroy_3609820(uVar1,0);
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 8),0);
    pcVar2 = (char *)(_UNK_0361987c + 0x3619834);
    if (*pcVar2 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619880 + 0x3619848),0);
      *pcVar2 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_03619884 + 0x361985c) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar2 = (char *)(_UNK_036197ac + 0x3619704);
    if (*pcVar2 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036197b0 + 0x3619718));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036197b4 + 0x3619724));
      *pcVar2 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_036197b8 + 0x3619738) + 0x1c) == 0) {
      thunk_FUN_00efd7c4();
    }
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar3 + 8);
    }
    if (*(int *)(**(int **)(_UNK_036197bc + 0x3619760) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_036197c0 + 0x361977c);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_036197c4 + 0x361978c);
      *(code **)(_UNK_036197c8 + 0x361979c) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036197a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

