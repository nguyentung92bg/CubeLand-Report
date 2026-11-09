/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$Recycle
void Rotatelab_Pool_ObjectPool_object___Recycle (Rotatelab_Pool_ObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_1857B50* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$Recycle
   void Rotatelab_Pool_ObjectPool_object___Recycle (Rotatelab_Pool_ObjectPool_T__o* __this,
   Il2CppObject* instance, const MethodInfo_1857B50* method); */

void Rotatelab_Pool_ObjectPool_object___Recycle_1857b50(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_01867c34 + 0x1867b6c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01867c38 + 0x1867b80));
    *pcVar4 = '\x01';
  }
  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_1[6] <= *(int *)(param_1[8] + 0xc)) {
    if (param_2 != 0) {
      iVar3 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
      if (*(int *)(**(int **)(_UNK_01867c3c + 0x1867c14) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar4 = (char *)(_UNK_03619a18 + 0x36199d0);
      if (*pcVar4 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619a1c + 0x36199e4),0);
        *pcVar4 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_03619a20 + 0x36199f8) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar4 = (char *)(_UNK_03619948 + 0x36198a0);
      if (*pcVar4 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361994c + 0x36198b4));
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619950 + 0x36198c0));
        *pcVar4 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_03619954 + 0x36198d4) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(iVar3 + 8);
      }
      if (*(int *)(**(int **)(_UNK_03619958 + 0x36198fc) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361995c + 0x3619918);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03619960 + 0x3619928);
        *(code **)(_UNK_03619964 + 0x3619938) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x03619944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,*(undefined4 *)(*param_1 + 0xfc));
  iVar3 = param_1[8];
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar3 + 8);
  uVar5 = *(uint *)(iVar3 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar5 < *(uint *)(iVar6 + 0xc)) {
    piVar1 = (int *)(iVar6 + uVar5 * 4 + 0x10);
    *piVar1 = param_2;
    thunk_FUN_00ec5080(piVar1,param_2);
    *(uint *)(iVar3 + 0xc) = uVar5 + 1;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    return;
  }
  piVar1 = (int *)(iVar3 + 8);
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar1 + 0xc) == 0) {
    iVar6 = 4;
  }
  else {
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*piVar1 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar1,iVar6,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_3 +
                                                                                      0x10) + 0x60)
                                                                    + 0x24) + 0x10) + 0x60) + 0x34)
                                + 0x10) + 0x60) + 0x38));
  iVar6 = *(int *)(iVar3 + 8);
  if (iVar6 != 0) {
    if (*(uint *)(iVar3 + 0xc) < *(uint *)(iVar6 + 0xc)) {
      piVar1 = (int *)(iVar6 + *(uint *)(iVar3 + 0xc) * 4 + 0x10);
      *piVar1 = param_2;
      thunk_FUN_00ec5080(piVar1,param_2);
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

