/* IL2CPP: Rotatelab.SeasonPassChestViewer$$Awake
void Rotatelab_SeasonPassChestViewer__Awake (Rotatelab_SeasonPassChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassChestViewer$$Awake
   void Rotatelab_SeasonPassChestViewer__Awake (Rotatelab_SeasonPassChestViewer_o* __this, const
   MethodInfo* method); */

void Rotatelab_SeasonPassChestViewer__Awake_fc484c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_00fd48a4 + 0xfd4860);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd48a8 + 0xfd4874));
    *pcVar5 = '\x01';
  }
  uVar3 = UnityEngine_Component__GetComponent_object__143f3b0
                    (param_1,**(undefined4 **)(_UNK_00fd48ac + 0xfd4888));
  puVar4 = (undefined4 *)(param_1 + 0x1c);
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

