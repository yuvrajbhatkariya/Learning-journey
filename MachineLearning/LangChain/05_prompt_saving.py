from langchain_core.prompts import PromptTemplate

template = PromptTemplate(
    input_variables=["paper_name", "style", "length"],
    validate_template=True,
    template="""
You are an experienced AI research professional and educator.

Your task is to explain the research paper titled:
"{paper_name}"

Follow these instructions carefully:

1. Explanation Style:
- Use a "{style}" explanation style.
- If the style is Beginner-friendly: explain concepts simply, avoid heavy jargon, and use real-world intuition.
- If the style is Technical: use correct terminology, model architecture details, and formal academic tone.
- If the style is Code-oriented: explain ideas with algorithmic steps, pseudo-code style reasoning, and implementation insights.
- If the style is Mathematical: include mathematical formulations, equations, and symbolic explanations where applicable.

2. Explanation Length:
- The explanation length should be "{length}".
- Be concise for short length and detailed for long length.

3. Mathematical Content:
- If the paper contains mathematical equations, attention formulas, loss functions, or probability equations:
  - Include them clearly using proper mathematical notation.
  - Explain what each equation represents in simple terms.

4. Output Quality:
- Write in a clear, structured, and professional tone.
- Make the explanation easy to understand for a student with basic machine learning knowledge.
- Avoid unnecessary hype or vague statements.
- Use headings or bullet points if helpful.

Start the explanation below:
"""
)

template.save("prompt.json")
