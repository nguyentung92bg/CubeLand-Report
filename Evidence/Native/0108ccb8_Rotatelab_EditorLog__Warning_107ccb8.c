/* IL2CPP: Rotatelab.EditorLog$$Warning
void Rotatelab_EditorLog__Warning (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.EditorLog$$Warning
   void Rotatelab_EditorLog__Warning (Il2CppObject* message, UnityEngine_Object_o* context, const
   MethodInfo* method); */

void Rotatelab_EditorLog__Warning_107ccb8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0108cd1c + 0x108ccd0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108cd20 + 0x108cce4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0108cd24 + 0x108ccf8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c29e4 + 0x35c28d0);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c29e8 + 0x35c28e4),param_2,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c29ec + 0x35c28f0));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c29f0 + 0x35c2904);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c29f4 + 0x35c2920);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c29f8 + 0x35c2934));
    *pcVar5 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar6;
  }
  piVar6 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_035c29fc + 0x35c2978)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xe0);
        goto LAB_035c29c0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c29fc + 0x35c2978),4);
LAB_035c29c0:
  (*(code *)*puVar2)(piVar6,2,param_1,param_2,puVar2[1]);
  return;
}

