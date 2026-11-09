/* IL2CPP: Rotatelab.EditorLog$$Exception
void Rotatelab_EditorLog__Exception (System_Exception_o* exception, UnityEngine_Object_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.EditorLog$$Exception
   void Rotatelab_EditorLog__Exception (System_Exception_o* exception, UnityEngine_Object_o*
   context, const MethodInfo* method); */

void Rotatelab_EditorLog__Exception_107cd98(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0108cdfc + 0x108cdb0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ce00 + 0x108cdc4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0108ce04 + 0x108cdd8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035b16c8 + 0x35b15bc);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b16cc + 0x35b15d0),param_2,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b16d0 + 0x35b15dc));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035b16d4 + 0x35b15f0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035b16d8 + 0x35b160c);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b16dc + 0x35b1620));
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
      if (piVar4[-1] == **(int **)(_UNK_035b16e0 + 0x35b1664)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
        goto LAB_035b16ac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035b16e0 + 0x35b1664),1);
LAB_035b16ac:
                    /* WARNING: Could not recover jumptable at 0x035b16c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,param_1,param_2,puVar2[1]);
  return;
}

