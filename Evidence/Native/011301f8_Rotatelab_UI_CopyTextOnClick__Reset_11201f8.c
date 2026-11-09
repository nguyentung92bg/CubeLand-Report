/* IL2CPP: Rotatelab.UI.CopyTextOnClick$$Reset
void Rotatelab_UI_CopyTextOnClick__Reset (Rotatelab_UI_CopyTextOnClick_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CopyTextOnClick$$Reset
   void Rotatelab_UI_CopyTextOnClick__Reset (Rotatelab_UI_CopyTextOnClick_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_CopyTextOnClick__Reset_11201f8(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01130250 + 0x113020c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130254 + 0x1130220));
    *pcVar5 = '\x01';
  }
  uVar3 = UnityEngine_Component__GetComponentInChildren_object__143f57c
                    (param_1,**(undefined4 **)(_UNK_01130258 + 0x1130234));
  puVar4 = (undefined4 *)(param_1 + 0x10);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

